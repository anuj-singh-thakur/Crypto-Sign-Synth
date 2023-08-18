-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity KeccakF1600_Statebkb_rom is 
    generic(
             DWIDTH     : integer := 64; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 24
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          addr1      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of KeccakF1600_Statebkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000000000000000000000000000000000000000000000000000000000001", 
    1 => "0000000000000000000000000000000000000000000000001000000010000010", 
    2 => "1000000000000000000000000000000000000000000000001000000010001010", 
    3 => "1000000000000000000000000000000010000000000000001000000000000000", 
    4 => "0000000000000000000000000000000000000000000000001000000010001011", 
    5 => "0000000000000000000000000000000010000000000000000000000000000001", 
    6 => "1000000000000000000000000000000010000000000000001000000010000001", 
    7 => "1000000000000000000000000000000000000000000000001000000000001001", 
    8 => "0000000000000000000000000000000000000000000000000000000010001010", 
    9 => "0000000000000000000000000000000000000000000000000000000010001000", 
    10 => "0000000000000000000000000000000010000000000000001000000000001001", 
    11 => "0000000000000000000000000000000010000000000000000000000000001010", 
    12 => "0000000000000000000000000000000010000000000000001000000010001011", 
    13 => "1000000000000000000000000000000000000000000000000000000010001011", 
    14 => "1000000000000000000000000000000000000000000000001000000010001001", 
    15 => "1000000000000000000000000000000000000000000000001000000000000011", 
    16 => "1000000000000000000000000000000000000000000000001000000000000010", 
    17 => "1000000000000000000000000000000000000000000000000000000010000000", 
    18 => "0000000000000000000000000000000000000000000000001000000000001010", 
    19 => "1000000000000000000000000000000010000000000000000000000000001010", 
    20 => "1000000000000000000000000000000010000000000000001000000010000001", 
    21 => "1000000000000000000000000000000000000000000000001000000010000000", 
    22 => "0000000000000000000000000000000010000000000000000000000000000001", 
    23 => "1000000000000000000000000000000010000000000000001000000000001000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem(CONV_INTEGER(addr1_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity KeccakF1600_Statebkb is
    generic (
        DataWidth : INTEGER := 64;
        AddressRange : INTEGER := 24;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of KeccakF1600_Statebkb is
    component KeccakF1600_Statebkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    KeccakF1600_Statebkb_rom_U :  component KeccakF1600_Statebkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1);

end architecture;


