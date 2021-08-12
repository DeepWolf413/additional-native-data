// gang2.ysc @ L51730
bool func_1269(char[4] cParam0, int iParam1, int iParam2)
{
  struct<4> Var0;

  if (!func_1828(iParam1))
  {
    func_856(iParam1, iParam2, &Var0);
    iLocal_378[iParam1] = VEHICLE::CREATE_VEHICLE(Var0.f_4, Var0, Var0.f_3, false, false, false, false);
    func_449(iParam1, 1);
    if (iParam1 == 1)
    {
      func_422(cParam0, iLocal_378[iParam1], "hotairballoon01", 0, 0, 0, 0);
      ENTITY::SET_ENTITY_LOD_DIST(iLocal_378[iParam1], 300);
    }
    if (func_1828(iParam1))
    {
      ENTITY::FREEZE_ENTITY_POSITION(iLocal_378[iParam1], func_1829(8, &Var0));
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_378[iParam1], func_1829(4, &Var0));
      VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_378[iParam1], false);
    }
  }
  return func_1828(iParam1);
}