// am_mp_defunct_base.ysc @ L308540
void func_4974(var uParam0, int iParam1)
{
  func_4976(&(uParam0->f_1), 0, 0);
  if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
  }
  if (Global_2359299)
  {
    ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, true, false, false);
  }
  ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
  if (func_735(PLAYER::PLAYER_PED_ID()))
  {
    PED::SET_PED_HEATSCALE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0f);
  }
  ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
  if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
    ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
  }
  if (iParam1 == 1)
  {
    func_1083(0);
    func_4975();
  }
}