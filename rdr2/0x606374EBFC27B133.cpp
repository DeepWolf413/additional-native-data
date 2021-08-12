// act_bankrobbery01.ysc @ L9236
void func_213(var uParam0)
{
  switch (uParam0->f_565.f_2)
  {
    case 1:
      return;
    case 2:
    case 3:
    case 4:
      PED::_0xBA0980B5C0A11924(0f);
      PED::_0x28CB6391ACEDD9DB(0f);
      VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
      break;
    case 5:
      if (!func_516(Global_35, func_529(0), 100f, 1, 1))
      {
        func_554(uParam0, 5);
        func_554(uParam0, 6);
        func_554(uParam0, 7);
        func_554(uParam0, 8);
        func_554(uParam0, 15);
      }
      break;
  }
}