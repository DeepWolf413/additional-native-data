// grays2.ysc @ L55786
bool func_1356(char[4] cParam0, int iParam1)
{
  int iVar0;
  struct<4> Var1;
  int iVar5;

  iVar5 = 1;
  iVar0 = 0;
  while (iVar0 < iLocal_432)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(iLocal_432[iVar0]) && func_1849())
    {
      Var1 = { func_1933(cParam0, iVar0) };
      iLocal_432[iVar0] = func_1505(func_408(iVar0), Var1, Var1.f_3, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0);
      func_1934(cParam0, iVar0);
      PED::_SET_PED_BODY_COMPONENT(iLocal_432[iVar0], -1685056864);
      PHYSICS::_0x6EA0E93CFFA472CC(iLocal_432[iVar0]);
      func_1935(iLocal_432[iVar0], 1);
      func_1936(iLocal_432[iVar0], 0, 15);
      func_1834(iLocal_432[iVar0], 0);
      bLocal_83 = true;
      iVar5 = 0;
    }
    iVar0++;
  }
  return iVar5;
}