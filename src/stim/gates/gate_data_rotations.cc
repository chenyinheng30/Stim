// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "stim/gates/gates.h"

using namespace stim;

void GateDataMap::add_gate_data_rotations(bool &failed) {
    add_gate(
        failed,
        Gate{
            .name = "ROTION_X",
            .id = GateType::ROTION_X,
            .best_candidate_inverse_id = GateType::NOT_A_GATE,
            .arg_count = 1,
            .flags = GATE_IS_SINGLE_QUBIT_GATE,
            .category = "C_Parameterized Rotation Gates",
            .help = R"MARKDOWN(
Syntax-only rotation about the X axis.

The angle is specified in radians.
This instruction is retained in parsed circuits but cannot be simulated by Stim.
)MARKDOWN",
            .unitary_data = {},
            .flow_data = {},
            .h_s_cx_m_r_decomposition = nullptr,
        });

    add_gate(
        failed,
        Gate{
            .name = "ROTION_Y",
            .id = GateType::ROTION_Y,
            .best_candidate_inverse_id = GateType::NOT_A_GATE,
            .arg_count = 1,
            .flags = GATE_IS_SINGLE_QUBIT_GATE,
            .category = "C_Parameterized Rotation Gates",
            .help = R"MARKDOWN(
Syntax-only rotation about the Y axis.

The angle is specified in radians.
This instruction is retained in parsed circuits but cannot be simulated by Stim.
)MARKDOWN",
            .unitary_data = {},
            .flow_data = {},
            .h_s_cx_m_r_decomposition = nullptr,
        });

    add_gate(
        failed,
        Gate{
            .name = "ROTION_Z",
            .id = GateType::ROTION_Z,
            .best_candidate_inverse_id = GateType::NOT_A_GATE,
            .arg_count = 1,
            .flags = GATE_IS_SINGLE_QUBIT_GATE,
            .category = "C_Parameterized Rotation Gates",
            .help = R"MARKDOWN(
Syntax-only rotation about the Z axis.

The angle is specified in radians.
This instruction is retained in parsed circuits but cannot be simulated by Stim.
)MARKDOWN",
            .unitary_data = {},
            .flow_data = {},
            .h_s_cx_m_r_decomposition = nullptr,
        });
}