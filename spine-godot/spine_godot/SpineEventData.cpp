/******************************************************************************
 * Spine Runtimes License Agreement
 * Last updated January 1, 2020. Replaces all prior versions.
 *
 * Copyright (c) 2013-2020, Esoteric Software LLC
 *
 * Integration of the Spine Runtimes into software or otherwise creating
 * derivative works of the Spine Runtimes is permitted under the terms and
 * conditions of Section 2 of the Spine Editor License Agreement:
 * http://esotericsoftware.com/spine-editor-license
 *
 * Otherwise, it is permitted to integrate the Spine Runtimes into software
 * or otherwise create derivative works of the Spine Runtimes (collectively,
 * "Products"), provided that each user of the Products must obtain their own
 * Spine Editor license and redistribution of the Products in any form must
 * include this license and copyright notice.
 *
 * THE SPINE RUNTIMES ARE PROVIDED BY ESOTERIC SOFTWARE LLC "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ESOTERIC SOFTWARE LLC BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES,
 * BUSINESS INTERRUPTION, OR LOSS OF USE, DATA, OR PROFITS) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THE SPINE RUNTIMES, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/

#include "SpineEventData.h"
#include "common.h"

void SpineEventData::_bind_methods() {
 ClassDB::bind_method(D_METHOD("get_event_name"), &SpineEventData::get_event_name);
 ClassDB::bind_method(D_METHOD("get_int_value"), &SpineEventData::get_int_value);
 ClassDB::bind_method(D_METHOD("set_int_value", "v"), &SpineEventData::set_int_value);
 ClassDB::bind_method(D_METHOD("get_float_value"), &SpineEventData::get_float_value);
 ClassDB::bind_method(D_METHOD("set_float_value", "v"), &SpineEventData::set_float_value);
 ClassDB::bind_method(D_METHOD("get_string_value"), &SpineEventData::get_string_value);
 ClassDB::bind_method(D_METHOD("set_string_value", "v"), &SpineEventData::set_string_value);
 ClassDB::bind_method(D_METHOD("get_volume"), &SpineEventData::get_volume);
 ClassDB::bind_method(D_METHOD("set_volume", "v"), &SpineEventData::set_volume);
 ClassDB::bind_method(D_METHOD("get_balance"), &SpineEventData::get_balance);
 ClassDB::bind_method(D_METHOD("set_balance", "v"), &SpineEventData::set_balance);
}

SpineEventData::SpineEventData() : event_data(nullptr) {
}

SpineEventData::~SpineEventData() {
}

String SpineEventData::get_event_name() {
 SPINE_CHECK(event_data, "")
 return event_data->getName().buffer();
}

int SpineEventData::get_int_value() {
 SPINE_CHECK(event_data, 0)
 return event_data->getIntValue();
}

void SpineEventData::set_int_value(int v) {
 SPINE_CHECK(event_data,)
 event_data->setIntValue(v);
}

float SpineEventData::get_float_value() {
 SPINE_CHECK(event_data, 0)
 return event_data->getFloatValue();
}

void SpineEventData::set_float_value(float v) {
 SPINE_CHECK(event_data,)
 event_data->setFloatValue(v);
}

String SpineEventData::get_string_value() {
 SPINE_CHECK(event_data, "")
 return event_data->getStringValue().buffer();
}

void SpineEventData::set_string_value(const String &v) {
 SPINE_CHECK(event_data,)
 event_data->setStringValue(spine::String(v.utf8()));
}

float SpineEventData::get_volume() {
 SPINE_CHECK(event_data, 0)
 return event_data->getVolume();
}

void SpineEventData::set_volume(float v) {
 SPINE_CHECK(event_data,)
 event_data->setVolume(v);
}

float SpineEventData::get_balance() {
 SPINE_CHECK(event_data, 0)
 return event_data->getBalance();
}

void SpineEventData::set_balance(float v) {
 SPINE_CHECK(event_data,)
 event_data->setBalance(v);
}
