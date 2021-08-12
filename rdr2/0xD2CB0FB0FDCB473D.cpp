// player_horse.ysc @ L14675
void func_475(int iParam0)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
  {
    return;
  }
  if (func_388(iParam0))
  {
    iVar0 = func_401(iParam0);
    func_315(iVar0);
  }
  func_315(0);
  func_717(iParam0, 0, 0);
  func_200(0, 1);
  func_776(0);
  PLAYER::_0x8FBF9EDB378CCB8C(PLAYER::PLAYER_ID(), iParam0);
  if (func_201() == 0)
  {
    PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID(), iParam0);
    func_217(0);
    func_214(0);
  }
  PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
  func_404();
}