// marston2_intro.ysc @ L5849
bool func_269(var uParam0)
{
  struct<4> Var0;

  if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
  {
    return true;
  }
  Var0 = { func_444(0, 3) };
  iLocal_20 = VEHICLE::CREATE_VEHICLE(joaat("UTILLIWAG"), Var0, Var0.f_3, true, true, true, false);
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
  {
    func_273(uParam0, iLocal_20, "UTILLIWAG", 0, 0, 1, 0);
    func_445(uParam0, iLocal_20, 0);
    func_446(uParam0, iLocal_20);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_20, false);
    VEHICLE::_SET_VEHICLE_TINT(iLocal_20, 2);
    VEHICLE::_SET_VEHICLE_LIVERY(iLocal_20, 2);
    return true;
  }
  return false;
}