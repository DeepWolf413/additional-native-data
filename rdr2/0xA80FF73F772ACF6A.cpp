// short_update.ysc @ L16739
void func_479()
{
  int iVar0;
  int iVar1;

  switch (func_1476(36))
  {
    case 4:
      if (func_1477(36))
      {
      }
      else
      {
        func_1478(36);
        iVar0 = PLAYER::PLAYER_ID();
        iVar1 = PLAYER::GET_WANTED_LEVEL_THRESHOLD(0);
        LAW::_SET_WANTED_INTENSITY_FOR_PLAYER(iVar0, iVar1);
        if (func_138(iVar0, 1, 0, 1))
        {
          LAW::_0x55F37F5F3F2475E1();
        }
        MISC::SET_CHEAT_ACTIVE(4);
        func_1528();
        func_1527();
        LAW::_0x29CD4896ECB66C12();
        func_1475(36, func_1474(36));
        func_1496(36);
      }
  }
}