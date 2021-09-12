#pragma once
#include "ofMain.h"

namespace ofxCppFlow
{
template <class T>
vector<float> get_images_as_batch(const vector<T> &_batch)
{

    size_t size = _batch[0].getPixels().size();
    for (const auto &el : _batch)
    {
        if(size != el.getPixels().size()){
            ofLogError("ofxCppFlow::get_images_as_batch") << "Images mush be the same size";
            exit(-1);
        }
    }
    size_t total_size = _batch.size() * size;

    vector<float> batch(total_size);

    vector<float>::iterator itr = batch.begin();
    for (const auto &el : _batch)
    {
        std::copy(el.getPixels().begin(), el.getPixels().end(), itr);

        std::transform(el.getPixels().begin(), el.getPixels().end(), itr, [](const unsigned char c) {
            return float(c) / 255.0;
        });

        itr += size;
    }

    return batch;
}
}; // namespace ofxCppFlow