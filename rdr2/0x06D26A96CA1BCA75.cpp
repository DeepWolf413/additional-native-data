// ambush_exc_wagon_bomb.ysc @ L8545
void func_286(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
  if (func_61(Global_1935630.f_40, 0, 0))
  {
    PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 3, iParam1, 0);
    PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 1, iParam2, 0);
    PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 3, iParam3);
    PED::_0xA1EB5D029E0191D3(Global_1935630.f_40, 1, iParam4);
    TASK::TASK_HORSE_ACTION(Global_1935630.f_40, 4, 0, 0);
  }
}