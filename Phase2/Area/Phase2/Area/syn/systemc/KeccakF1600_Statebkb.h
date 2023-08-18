// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __KeccakF1600_Statebkb_H__
#define __KeccakF1600_Statebkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct KeccakF1600_Statebkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 64;
  static const unsigned AddressRange = 24;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(KeccakF1600_Statebkb_ram) {
        ram[0] = "0b0000000000000000000000000000000000000000000000000000000000000001";
        ram[1] = "0b0000000000000000000000000000000000000000000000001000000010000010";
        ram[2] = "0b1000000000000000000000000000000000000000000000001000000010001010";
        ram[3] = "0b1000000000000000000000000000000010000000000000001000000000000000";
        ram[4] = "0b0000000000000000000000000000000000000000000000001000000010001011";
        ram[5] = "0b0000000000000000000000000000000010000000000000000000000000000001";
        ram[6] = "0b1000000000000000000000000000000010000000000000001000000010000001";
        ram[7] = "0b1000000000000000000000000000000000000000000000001000000000001001";
        ram[8] = "0b0000000000000000000000000000000000000000000000000000000010001010";
        ram[9] = "0b0000000000000000000000000000000000000000000000000000000010001000";
        ram[10] = "0b0000000000000000000000000000000010000000000000001000000000001001";
        ram[11] = "0b0000000000000000000000000000000010000000000000000000000000001010";
        ram[12] = "0b0000000000000000000000000000000010000000000000001000000010001011";
        ram[13] = "0b1000000000000000000000000000000000000000000000000000000010001011";
        ram[14] = "0b1000000000000000000000000000000000000000000000001000000010001001";
        ram[15] = "0b1000000000000000000000000000000000000000000000001000000000000011";
        ram[16] = "0b1000000000000000000000000000000000000000000000001000000000000010";
        ram[17] = "0b1000000000000000000000000000000000000000000000000000000010000000";
        ram[18] = "0b0000000000000000000000000000000000000000000000001000000000001010";
        ram[19] = "0b1000000000000000000000000000000010000000000000000000000000001010";
        ram[20] = "0b1000000000000000000000000000000010000000000000001000000010000001";
        ram[21] = "0b1000000000000000000000000000000000000000000000001000000010000000";
        ram[22] = "0b0000000000000000000000000000000010000000000000000000000000000001";
        ram[23] = "0b1000000000000000000000000000000010000000000000001000000000001000";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(KeccakF1600_Statebkb) {


static const unsigned DataWidth = 64;
static const unsigned AddressRange = 24;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


KeccakF1600_Statebkb_ram* meminst;


SC_CTOR(KeccakF1600_Statebkb) {
meminst = new KeccakF1600_Statebkb_ram("KeccakF1600_Statebkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~KeccakF1600_Statebkb() {
    delete meminst;
}


};//endmodule
#endif
