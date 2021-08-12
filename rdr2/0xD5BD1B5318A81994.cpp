// act_bankrobbery01.ysc @ L38715
void func_1141(var uParam0, var uParam1)
{
  int iVar0;

  iVar0 = func_1142(uParam0->f_40[0], func_630(uParam1));
  if (iVar0 >= 437 && iVar0 <= 460)
  {
    PED::_0x9BBEAF8B0C007F1E(uParam0->f_40[0], 0);
    PED::_0xD5BD1B5318A81994(uParam1->f_51, 1);
  }
  else
  {
    func_665(uParam1->f_51, 10);
    PED::_0xD5BD1B5318A81994(uParam1->f_51, 0);
    PED::_0x9BBEAF8B0C007F1E(uParam0->f_40[0], 1);
  }
}