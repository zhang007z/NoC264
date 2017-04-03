/*
 * These source files contain a hardware description of a network
 * automatically generated by CONNECT (CONfigurable NEtwork Creation Tool).
 *
 * This product includes a hardware design developed by Carnegie Mellon
 * University.
 *
 * Copyright (c) 2012 by Michael K. Papamichael, Carnegie Mellon University
 *
 * For more information, see the CONNECT project website at:
 *   http://www.ece.cmu.edu/~mpapamic/connect
 *
 * This design is provided for internal, non-commercial research use only, 
 * cannot be used for, or in support of, goods or services, and is not for
 * redistribution, with or without modifications.
 * 
 * You may not use the name "Carnegie Mellon University" or derivations
 * thereof to endorse or promote products derived from this software.
 *
 * THE SOFTWARE IS PROVIDED "AS-IS" WITHOUT ANY WARRANTY OF ANY KIND, EITHER
 * EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO ANY WARRANTY
 * THAT THE SOFTWARE WILL CONFORM TO SPECIFICATIONS OR BE ERROR-FREE AND ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
 * TITLE, OR NON-INFRINGEMENT.  IN NO EVENT SHALL CARNEGIE MELLON UNIVERSITY
 * BE LIABLE FOR ANY DAMAGES, INCLUDING BUT NOT LIMITED TO DIRECT, INDIRECT,
 * SPECIAL OR CONSEQUENTIAL DAMAGES, ARISING OUT OF, RESULTING FROM, OR IN
 * ANY WAY CONNECTED WITH THIS SOFTWARE (WHETHER OR NOT BASED UPON WARRANTY,
 * CONTRACT, TORT OR OTHERWISE).
 *
 */


//
// Generated by Bluespec Compiler, version 2012.01.A (build 26572, 2012-01-17)
//
// On Sat Feb 11 18:26:48 EST 2017
//
// Method conflict info:
// Method: allocate
// Sequenced before: next
// Sequenced before (restricted): allocate
//
// Method: next
// Sequenced after: allocate
// Conflicts: next
//
//
// Ports:
// Name                         I/O  size props
// allocate                       O    25
// pipeline                       I     1
// CLK                            I     1 clock
// RST_N                          I     1 reset
// allocate_alloc_input           I    25
// EN_next                        I     1
// EN_allocate                    I     1
//
// Combinational paths from inputs to outputs:
//   (allocate_alloc_input, pipeline) -> allocate
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
`define BSV_ASSIGNMENT_DELAY
`endif

module mkSepRouterAllocator(pipeline,
			    CLK,
			    RST_N,

			    allocate_alloc_input,
			    EN_allocate,
			    allocate,

			    EN_next);
  input  pipeline;
  input  CLK;
  input  RST_N;

  // actionvalue method allocate
  input  [24 : 0] allocate_alloc_input;
  input  EN_allocate;
  output [24 : 0] allocate;

  // action method next
  input  EN_next;

  // signals for module outputs
  wire [24 : 0] allocate;

  // register as_inputArbGrants_reg_0
  reg as_inputArbGrants_reg_0;
  wire as_inputArbGrants_reg_0$D_IN, as_inputArbGrants_reg_0$EN;

  // register as_inputArbGrants_reg_0_1
  reg as_inputArbGrants_reg_0_1;
  wire as_inputArbGrants_reg_0_1$D_IN, as_inputArbGrants_reg_0_1$EN;

  // register as_inputArbGrants_reg_0_2
  reg as_inputArbGrants_reg_0_2;
  wire as_inputArbGrants_reg_0_2$D_IN, as_inputArbGrants_reg_0_2$EN;

  // register as_inputArbGrants_reg_0_3
  reg as_inputArbGrants_reg_0_3;
  wire as_inputArbGrants_reg_0_3$D_IN, as_inputArbGrants_reg_0_3$EN;

  // register as_inputArbGrants_reg_0_4
  reg as_inputArbGrants_reg_0_4;
  wire as_inputArbGrants_reg_0_4$D_IN, as_inputArbGrants_reg_0_4$EN;

  // register as_inputArbGrants_reg_1
  reg as_inputArbGrants_reg_1;
  wire as_inputArbGrants_reg_1$D_IN, as_inputArbGrants_reg_1$EN;

  // register as_inputArbGrants_reg_1_1
  reg as_inputArbGrants_reg_1_1;
  wire as_inputArbGrants_reg_1_1$D_IN, as_inputArbGrants_reg_1_1$EN;

  // register as_inputArbGrants_reg_1_2
  reg as_inputArbGrants_reg_1_2;
  wire as_inputArbGrants_reg_1_2$D_IN, as_inputArbGrants_reg_1_2$EN;

  // register as_inputArbGrants_reg_1_3
  reg as_inputArbGrants_reg_1_3;
  wire as_inputArbGrants_reg_1_3$D_IN, as_inputArbGrants_reg_1_3$EN;

  // register as_inputArbGrants_reg_1_4
  reg as_inputArbGrants_reg_1_4;
  wire as_inputArbGrants_reg_1_4$D_IN, as_inputArbGrants_reg_1_4$EN;

  // register as_inputArbGrants_reg_2
  reg as_inputArbGrants_reg_2;
  wire as_inputArbGrants_reg_2$D_IN, as_inputArbGrants_reg_2$EN;

  // register as_inputArbGrants_reg_2_1
  reg as_inputArbGrants_reg_2_1;
  wire as_inputArbGrants_reg_2_1$D_IN, as_inputArbGrants_reg_2_1$EN;

  // register as_inputArbGrants_reg_2_2
  reg as_inputArbGrants_reg_2_2;
  wire as_inputArbGrants_reg_2_2$D_IN, as_inputArbGrants_reg_2_2$EN;

  // register as_inputArbGrants_reg_2_3
  reg as_inputArbGrants_reg_2_3;
  wire as_inputArbGrants_reg_2_3$D_IN, as_inputArbGrants_reg_2_3$EN;

  // register as_inputArbGrants_reg_2_4
  reg as_inputArbGrants_reg_2_4;
  wire as_inputArbGrants_reg_2_4$D_IN, as_inputArbGrants_reg_2_4$EN;

  // register as_inputArbGrants_reg_3
  reg as_inputArbGrants_reg_3;
  wire as_inputArbGrants_reg_3$D_IN, as_inputArbGrants_reg_3$EN;

  // register as_inputArbGrants_reg_3_1
  reg as_inputArbGrants_reg_3_1;
  wire as_inputArbGrants_reg_3_1$D_IN, as_inputArbGrants_reg_3_1$EN;

  // register as_inputArbGrants_reg_3_2
  reg as_inputArbGrants_reg_3_2;
  wire as_inputArbGrants_reg_3_2$D_IN, as_inputArbGrants_reg_3_2$EN;

  // register as_inputArbGrants_reg_3_3
  reg as_inputArbGrants_reg_3_3;
  wire as_inputArbGrants_reg_3_3$D_IN, as_inputArbGrants_reg_3_3$EN;

  // register as_inputArbGrants_reg_3_4
  reg as_inputArbGrants_reg_3_4;
  wire as_inputArbGrants_reg_3_4$D_IN, as_inputArbGrants_reg_3_4$EN;

  // register as_inputArbGrants_reg_4
  reg as_inputArbGrants_reg_4;
  wire as_inputArbGrants_reg_4$D_IN, as_inputArbGrants_reg_4$EN;

  // register as_inputArbGrants_reg_4_1
  reg as_inputArbGrants_reg_4_1;
  wire as_inputArbGrants_reg_4_1$D_IN, as_inputArbGrants_reg_4_1$EN;

  // register as_inputArbGrants_reg_4_2
  reg as_inputArbGrants_reg_4_2;
  wire as_inputArbGrants_reg_4_2$D_IN, as_inputArbGrants_reg_4_2$EN;

  // register as_inputArbGrants_reg_4_3
  reg as_inputArbGrants_reg_4_3;
  wire as_inputArbGrants_reg_4_3$D_IN, as_inputArbGrants_reg_4_3$EN;

  // register as_inputArbGrants_reg_4_4
  reg as_inputArbGrants_reg_4_4;
  wire as_inputArbGrants_reg_4_4$D_IN, as_inputArbGrants_reg_4_4$EN;

  // ports of submodule inputArbs
  wire [4 : 0] inputArbs$input_arbs_0_select,
	       inputArbs$input_arbs_0_select_requests,
	       inputArbs$input_arbs_1_select,
	       inputArbs$input_arbs_1_select_requests,
	       inputArbs$input_arbs_2_select,
	       inputArbs$input_arbs_2_select_requests,
	       inputArbs$input_arbs_3_select,
	       inputArbs$input_arbs_3_select_requests,
	       inputArbs$input_arbs_4_select,
	       inputArbs$input_arbs_4_select_requests;
  wire inputArbs$EN_input_arbs_0_next,
       inputArbs$EN_input_arbs_1_next,
       inputArbs$EN_input_arbs_2_next,
       inputArbs$EN_input_arbs_3_next,
       inputArbs$EN_input_arbs_4_next;

  // ports of submodule outputArbs
  wire [4 : 0] outputArbs$output_arbs_0_select,
	       outputArbs$output_arbs_0_select_requests,
	       outputArbs$output_arbs_1_select,
	       outputArbs$output_arbs_1_select_requests,
	       outputArbs$output_arbs_2_select,
	       outputArbs$output_arbs_2_select_requests,
	       outputArbs$output_arbs_3_select,
	       outputArbs$output_arbs_3_select_requests,
	       outputArbs$output_arbs_4_select,
	       outputArbs$output_arbs_4_select_requests;
  wire outputArbs$EN_output_arbs_0_next,
       outputArbs$EN_output_arbs_1_next,
       outputArbs$EN_output_arbs_2_next,
       outputArbs$EN_output_arbs_3_next,
       outputArbs$EN_output_arbs_4_next;

  // actionvalue method allocate
  assign allocate =
	     { outputArbs$output_arbs_4_select[4],
	       outputArbs$output_arbs_3_select[4],
	       outputArbs$output_arbs_2_select[4],
	       outputArbs$output_arbs_1_select[4],
	       outputArbs$output_arbs_0_select[4],
	       outputArbs$output_arbs_4_select[3],
	       outputArbs$output_arbs_3_select[3],
	       outputArbs$output_arbs_2_select[3],
	       outputArbs$output_arbs_1_select[3],
	       outputArbs$output_arbs_0_select[3],
	       outputArbs$output_arbs_4_select[2],
	       outputArbs$output_arbs_3_select[2],
	       outputArbs$output_arbs_2_select[2],
	       outputArbs$output_arbs_1_select[2],
	       outputArbs$output_arbs_0_select[2],
	       outputArbs$output_arbs_4_select[1],
	       outputArbs$output_arbs_3_select[1],
	       outputArbs$output_arbs_2_select[1],
	       outputArbs$output_arbs_1_select[1],
	       outputArbs$output_arbs_0_select[1],
	       outputArbs$output_arbs_4_select[0],
	       outputArbs$output_arbs_3_select[0],
	       outputArbs$output_arbs_2_select[0],
	       outputArbs$output_arbs_1_select[0],
	       outputArbs$output_arbs_0_select[0] } ;

  // submodule inputArbs
  mkRouterInputArbitersRoundRobin inputArbs(.CLK(CLK),
					    .RST_N(RST_N),
					    .input_arbs_0_select_requests(inputArbs$input_arbs_0_select_requests),
					    .input_arbs_1_select_requests(inputArbs$input_arbs_1_select_requests),
					    .input_arbs_2_select_requests(inputArbs$input_arbs_2_select_requests),
					    .input_arbs_3_select_requests(inputArbs$input_arbs_3_select_requests),
					    .input_arbs_4_select_requests(inputArbs$input_arbs_4_select_requests),
					    .EN_input_arbs_0_next(inputArbs$EN_input_arbs_0_next),
					    .EN_input_arbs_1_next(inputArbs$EN_input_arbs_1_next),
					    .EN_input_arbs_2_next(inputArbs$EN_input_arbs_2_next),
					    .EN_input_arbs_3_next(inputArbs$EN_input_arbs_3_next),
					    .EN_input_arbs_4_next(inputArbs$EN_input_arbs_4_next),
					    .input_arbs_0_select(inputArbs$input_arbs_0_select),
					    .input_arbs_1_select(inputArbs$input_arbs_1_select),
					    .input_arbs_2_select(inputArbs$input_arbs_2_select),
					    .input_arbs_3_select(inputArbs$input_arbs_3_select),
					    .input_arbs_4_select(inputArbs$input_arbs_4_select));

  // submodule outputArbs
  mkRouterOutputArbitersRoundRobin outputArbs(.CLK(CLK),
					      .RST_N(RST_N),
					      .output_arbs_0_select_requests(outputArbs$output_arbs_0_select_requests),
					      .output_arbs_1_select_requests(outputArbs$output_arbs_1_select_requests),
					      .output_arbs_2_select_requests(outputArbs$output_arbs_2_select_requests),
					      .output_arbs_3_select_requests(outputArbs$output_arbs_3_select_requests),
					      .output_arbs_4_select_requests(outputArbs$output_arbs_4_select_requests),
					      .EN_output_arbs_0_next(outputArbs$EN_output_arbs_0_next),
					      .EN_output_arbs_1_next(outputArbs$EN_output_arbs_1_next),
					      .EN_output_arbs_2_next(outputArbs$EN_output_arbs_2_next),
					      .EN_output_arbs_3_next(outputArbs$EN_output_arbs_3_next),
					      .EN_output_arbs_4_next(outputArbs$EN_output_arbs_4_next),
					      .output_arbs_0_select(outputArbs$output_arbs_0_select),
					      .output_arbs_1_select(outputArbs$output_arbs_1_select),
					      .output_arbs_2_select(outputArbs$output_arbs_2_select),
					      .output_arbs_3_select(outputArbs$output_arbs_3_select),
					      .output_arbs_4_select(outputArbs$output_arbs_4_select));

  // register as_inputArbGrants_reg_0
  assign as_inputArbGrants_reg_0$D_IN = inputArbs$input_arbs_0_select[0] ;
  assign as_inputArbGrants_reg_0$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_0_1
  assign as_inputArbGrants_reg_0_1$D_IN = inputArbs$input_arbs_0_select[1] ;
  assign as_inputArbGrants_reg_0_1$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_0_2
  assign as_inputArbGrants_reg_0_2$D_IN = inputArbs$input_arbs_0_select[2] ;
  assign as_inputArbGrants_reg_0_2$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_0_3
  assign as_inputArbGrants_reg_0_3$D_IN = inputArbs$input_arbs_0_select[3] ;
  assign as_inputArbGrants_reg_0_3$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_0_4
  assign as_inputArbGrants_reg_0_4$D_IN = inputArbs$input_arbs_0_select[4] ;
  assign as_inputArbGrants_reg_0_4$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_1
  assign as_inputArbGrants_reg_1$D_IN = inputArbs$input_arbs_1_select[0] ;
  assign as_inputArbGrants_reg_1$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_1_1
  assign as_inputArbGrants_reg_1_1$D_IN = inputArbs$input_arbs_1_select[1] ;
  assign as_inputArbGrants_reg_1_1$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_1_2
  assign as_inputArbGrants_reg_1_2$D_IN = inputArbs$input_arbs_1_select[2] ;
  assign as_inputArbGrants_reg_1_2$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_1_3
  assign as_inputArbGrants_reg_1_3$D_IN = inputArbs$input_arbs_1_select[3] ;
  assign as_inputArbGrants_reg_1_3$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_1_4
  assign as_inputArbGrants_reg_1_4$D_IN = inputArbs$input_arbs_1_select[4] ;
  assign as_inputArbGrants_reg_1_4$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_2
  assign as_inputArbGrants_reg_2$D_IN = inputArbs$input_arbs_2_select[0] ;
  assign as_inputArbGrants_reg_2$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_2_1
  assign as_inputArbGrants_reg_2_1$D_IN = inputArbs$input_arbs_2_select[1] ;
  assign as_inputArbGrants_reg_2_1$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_2_2
  assign as_inputArbGrants_reg_2_2$D_IN = inputArbs$input_arbs_2_select[2] ;
  assign as_inputArbGrants_reg_2_2$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_2_3
  assign as_inputArbGrants_reg_2_3$D_IN = inputArbs$input_arbs_2_select[3] ;
  assign as_inputArbGrants_reg_2_3$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_2_4
  assign as_inputArbGrants_reg_2_4$D_IN = inputArbs$input_arbs_2_select[4] ;
  assign as_inputArbGrants_reg_2_4$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_3
  assign as_inputArbGrants_reg_3$D_IN = inputArbs$input_arbs_3_select[0] ;
  assign as_inputArbGrants_reg_3$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_3_1
  assign as_inputArbGrants_reg_3_1$D_IN = inputArbs$input_arbs_3_select[1] ;
  assign as_inputArbGrants_reg_3_1$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_3_2
  assign as_inputArbGrants_reg_3_2$D_IN = inputArbs$input_arbs_3_select[2] ;
  assign as_inputArbGrants_reg_3_2$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_3_3
  assign as_inputArbGrants_reg_3_3$D_IN = inputArbs$input_arbs_3_select[3] ;
  assign as_inputArbGrants_reg_3_3$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_3_4
  assign as_inputArbGrants_reg_3_4$D_IN = inputArbs$input_arbs_3_select[4] ;
  assign as_inputArbGrants_reg_3_4$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_4
  assign as_inputArbGrants_reg_4$D_IN = inputArbs$input_arbs_4_select[0] ;
  assign as_inputArbGrants_reg_4$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_4_1
  assign as_inputArbGrants_reg_4_1$D_IN = inputArbs$input_arbs_4_select[1] ;
  assign as_inputArbGrants_reg_4_1$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_4_2
  assign as_inputArbGrants_reg_4_2$D_IN = inputArbs$input_arbs_4_select[2] ;
  assign as_inputArbGrants_reg_4_2$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_4_3
  assign as_inputArbGrants_reg_4_3$D_IN = inputArbs$input_arbs_4_select[3] ;
  assign as_inputArbGrants_reg_4_3$EN = EN_allocate && pipeline ;

  // register as_inputArbGrants_reg_4_4
  assign as_inputArbGrants_reg_4_4$D_IN = inputArbs$input_arbs_4_select[4] ;
  assign as_inputArbGrants_reg_4_4$EN = EN_allocate && pipeline ;

  // submodule inputArbs
  assign inputArbs$input_arbs_0_select_requests = allocate_alloc_input[4:0] ;
  assign inputArbs$input_arbs_1_select_requests = allocate_alloc_input[9:5] ;
  assign inputArbs$input_arbs_2_select_requests =
	     allocate_alloc_input[14:10] ;
  assign inputArbs$input_arbs_3_select_requests =
	     allocate_alloc_input[19:15] ;
  assign inputArbs$input_arbs_4_select_requests =
	     allocate_alloc_input[24:20] ;
  assign inputArbs$EN_input_arbs_0_next = EN_next ;
  assign inputArbs$EN_input_arbs_1_next = EN_next ;
  assign inputArbs$EN_input_arbs_2_next = EN_next ;
  assign inputArbs$EN_input_arbs_3_next = EN_next ;
  assign inputArbs$EN_input_arbs_4_next = EN_next ;

  // submodule outputArbs
  assign outputArbs$output_arbs_0_select_requests =
	     pipeline ?
	       { as_inputArbGrants_reg_4,
		 as_inputArbGrants_reg_3,
		 as_inputArbGrants_reg_2,
		 as_inputArbGrants_reg_1,
		 as_inputArbGrants_reg_0 } :
	       { inputArbs$input_arbs_4_select[0],
		 inputArbs$input_arbs_3_select[0],
		 inputArbs$input_arbs_2_select[0],
		 inputArbs$input_arbs_1_select[0],
		 inputArbs$input_arbs_0_select[0] } ;
  assign outputArbs$output_arbs_1_select_requests =
	     pipeline ?
	       { as_inputArbGrants_reg_4_1,
		 as_inputArbGrants_reg_3_1,
		 as_inputArbGrants_reg_2_1,
		 as_inputArbGrants_reg_1_1,
		 as_inputArbGrants_reg_0_1 } :
	       { inputArbs$input_arbs_4_select[1],
		 inputArbs$input_arbs_3_select[1],
		 inputArbs$input_arbs_2_select[1],
		 inputArbs$input_arbs_1_select[1],
		 inputArbs$input_arbs_0_select[1] } ;
  assign outputArbs$output_arbs_2_select_requests =
	     pipeline ?
	       { as_inputArbGrants_reg_4_2,
		 as_inputArbGrants_reg_3_2,
		 as_inputArbGrants_reg_2_2,
		 as_inputArbGrants_reg_1_2,
		 as_inputArbGrants_reg_0_2 } :
	       { inputArbs$input_arbs_4_select[2],
		 inputArbs$input_arbs_3_select[2],
		 inputArbs$input_arbs_2_select[2],
		 inputArbs$input_arbs_1_select[2],
		 inputArbs$input_arbs_0_select[2] } ;
  assign outputArbs$output_arbs_3_select_requests =
	     pipeline ?
	       { as_inputArbGrants_reg_4_3,
		 as_inputArbGrants_reg_3_3,
		 as_inputArbGrants_reg_2_3,
		 as_inputArbGrants_reg_1_3,
		 as_inputArbGrants_reg_0_3 } :
	       { inputArbs$input_arbs_4_select[3],
		 inputArbs$input_arbs_3_select[3],
		 inputArbs$input_arbs_2_select[3],
		 inputArbs$input_arbs_1_select[3],
		 inputArbs$input_arbs_0_select[3] } ;
  assign outputArbs$output_arbs_4_select_requests =
	     pipeline ?
	       { as_inputArbGrants_reg_4_4,
		 as_inputArbGrants_reg_3_4,
		 as_inputArbGrants_reg_2_4,
		 as_inputArbGrants_reg_1_4,
		 as_inputArbGrants_reg_0_4 } :
	       { inputArbs$input_arbs_4_select[4],
		 inputArbs$input_arbs_3_select[4],
		 inputArbs$input_arbs_2_select[4],
		 inputArbs$input_arbs_1_select[4],
		 inputArbs$input_arbs_0_select[4] } ;
  assign outputArbs$EN_output_arbs_0_next = EN_next ;
  assign outputArbs$EN_output_arbs_1_next = EN_next ;
  assign outputArbs$EN_output_arbs_2_next = EN_next ;
  assign outputArbs$EN_output_arbs_3_next = EN_next ;
  assign outputArbs$EN_output_arbs_4_next = EN_next ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (!RST_N)
      begin
        as_inputArbGrants_reg_0 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_0_1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_0_2 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_0_3 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_0_4 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_1_1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_1_2 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_1_3 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_1_4 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_2 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_2_1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_2_2 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_2_3 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_2_4 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_3 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_3_1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_3_2 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_3_3 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_3_4 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_4 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_4_1 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_4_2 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_4_3 <= `BSV_ASSIGNMENT_DELAY 1'd0;
	as_inputArbGrants_reg_4_4 <= `BSV_ASSIGNMENT_DELAY 1'd0;
      end
    else
      begin
        if (as_inputArbGrants_reg_0$EN)
	  as_inputArbGrants_reg_0 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_0$D_IN;
	if (as_inputArbGrants_reg_0_1$EN)
	  as_inputArbGrants_reg_0_1 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_0_1$D_IN;
	if (as_inputArbGrants_reg_0_2$EN)
	  as_inputArbGrants_reg_0_2 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_0_2$D_IN;
	if (as_inputArbGrants_reg_0_3$EN)
	  as_inputArbGrants_reg_0_3 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_0_3$D_IN;
	if (as_inputArbGrants_reg_0_4$EN)
	  as_inputArbGrants_reg_0_4 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_0_4$D_IN;
	if (as_inputArbGrants_reg_1$EN)
	  as_inputArbGrants_reg_1 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_1$D_IN;
	if (as_inputArbGrants_reg_1_1$EN)
	  as_inputArbGrants_reg_1_1 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_1_1$D_IN;
	if (as_inputArbGrants_reg_1_2$EN)
	  as_inputArbGrants_reg_1_2 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_1_2$D_IN;
	if (as_inputArbGrants_reg_1_3$EN)
	  as_inputArbGrants_reg_1_3 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_1_3$D_IN;
	if (as_inputArbGrants_reg_1_4$EN)
	  as_inputArbGrants_reg_1_4 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_1_4$D_IN;
	if (as_inputArbGrants_reg_2$EN)
	  as_inputArbGrants_reg_2 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_2$D_IN;
	if (as_inputArbGrants_reg_2_1$EN)
	  as_inputArbGrants_reg_2_1 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_2_1$D_IN;
	if (as_inputArbGrants_reg_2_2$EN)
	  as_inputArbGrants_reg_2_2 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_2_2$D_IN;
	if (as_inputArbGrants_reg_2_3$EN)
	  as_inputArbGrants_reg_2_3 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_2_3$D_IN;
	if (as_inputArbGrants_reg_2_4$EN)
	  as_inputArbGrants_reg_2_4 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_2_4$D_IN;
	if (as_inputArbGrants_reg_3$EN)
	  as_inputArbGrants_reg_3 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_3$D_IN;
	if (as_inputArbGrants_reg_3_1$EN)
	  as_inputArbGrants_reg_3_1 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_3_1$D_IN;
	if (as_inputArbGrants_reg_3_2$EN)
	  as_inputArbGrants_reg_3_2 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_3_2$D_IN;
	if (as_inputArbGrants_reg_3_3$EN)
	  as_inputArbGrants_reg_3_3 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_3_3$D_IN;
	if (as_inputArbGrants_reg_3_4$EN)
	  as_inputArbGrants_reg_3_4 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_3_4$D_IN;
	if (as_inputArbGrants_reg_4$EN)
	  as_inputArbGrants_reg_4 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_4$D_IN;
	if (as_inputArbGrants_reg_4_1$EN)
	  as_inputArbGrants_reg_4_1 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_4_1$D_IN;
	if (as_inputArbGrants_reg_4_2$EN)
	  as_inputArbGrants_reg_4_2 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_4_2$D_IN;
	if (as_inputArbGrants_reg_4_3$EN)
	  as_inputArbGrants_reg_4_3 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_4_3$D_IN;
	if (as_inputArbGrants_reg_4_4$EN)
	  as_inputArbGrants_reg_4_4 <= `BSV_ASSIGNMENT_DELAY
	      as_inputArbGrants_reg_4_4$D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    as_inputArbGrants_reg_0 = 1'h0;
    as_inputArbGrants_reg_0_1 = 1'h0;
    as_inputArbGrants_reg_0_2 = 1'h0;
    as_inputArbGrants_reg_0_3 = 1'h0;
    as_inputArbGrants_reg_0_4 = 1'h0;
    as_inputArbGrants_reg_1 = 1'h0;
    as_inputArbGrants_reg_1_1 = 1'h0;
    as_inputArbGrants_reg_1_2 = 1'h0;
    as_inputArbGrants_reg_1_3 = 1'h0;
    as_inputArbGrants_reg_1_4 = 1'h0;
    as_inputArbGrants_reg_2 = 1'h0;
    as_inputArbGrants_reg_2_1 = 1'h0;
    as_inputArbGrants_reg_2_2 = 1'h0;
    as_inputArbGrants_reg_2_3 = 1'h0;
    as_inputArbGrants_reg_2_4 = 1'h0;
    as_inputArbGrants_reg_3 = 1'h0;
    as_inputArbGrants_reg_3_1 = 1'h0;
    as_inputArbGrants_reg_3_2 = 1'h0;
    as_inputArbGrants_reg_3_3 = 1'h0;
    as_inputArbGrants_reg_3_4 = 1'h0;
    as_inputArbGrants_reg_4 = 1'h0;
    as_inputArbGrants_reg_4_1 = 1'h0;
    as_inputArbGrants_reg_4_2 = 1'h0;
    as_inputArbGrants_reg_4_3 = 1'h0;
    as_inputArbGrants_reg_4_4 = 1'h0;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on
endmodule  // mkSepRouterAllocator

