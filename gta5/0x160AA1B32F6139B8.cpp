// agency_heist1.ysc @ L2729
bool func_49(int iParam0)
{
  struct<7> Var0;
  int iVar7;
  
  Var0 = { func_62(iParam0) };
  iVar7 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
  return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}