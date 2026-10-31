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
            .name = "ROTATION_X",
            .id = GateType::ROTATION_X,
            // Self-inverse as a gate type: ROTATION_X(t)^-1 = ROTATION_X(-t).
            .best_candidate_inverse_id = GateType::ROTATION_X,
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
            .name = "ROTATION_Y",
            .id = GateType::ROTATION_Y,
            // Self-inverse as a gate type: ROTATION_Y(t)^-1 = ROTATION_Y(-t).
            .best_candidate_inverse_id = GateType::ROTATION_Y,
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
            .name = "ROTATION_Z",
            .id = GateType::ROTATION_Z,
            // Self-inverse as a gate type: ROTATION_Z(t)^-1 = ROTATION_Z(-t).
            .best_candidate_inverse_id = GateType::ROTATION_Z,
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

    add_gate(
        failed,
        Gate{
            .name = "ROTATION",
            .id = GateType::ROTATION,
            // Self-inverse as a gate type: ROTATION[XYZ](t)^-1 = ROTATION[XYZ](-t).
            .best_candidate_inverse_id = GateType::ROTATION,
            .arg_count = 1,
            .flags = GATE_IS_NOT_FUSABLE,
            .category = "C_Parameterized Rotation Gates",
            .help = R"MARKDOWN(
Syntax-only rotation about a Pauli product axis given in the tag.

The tag holds one Pauli axis letter ('I', 'X', 'Y', or 'Z') per target, so
`ROTATION[XYZ](0.5) 0 1 2` rotates qubits 0, 1, and 2 about the XYZ axis.
The targets are grouped in chunks as long as the tag, and the number of
targets must be a multiple of the tag length.

The angle is specified in radians.
This instruction is retained in parsed circuits but cannot be simulated by Stim.

Example:
    ROTATION[XY](0.25) 0 1
    ROTATION[XYZ](0.5) 0 1 2 3 4 5
    ROTATION[Z](1) 5
)MARKDOWN",
            .unitary_data = {},
            .flow_data = {},
            .h_s_cx_m_r_decomposition = nullptr,
        });
}