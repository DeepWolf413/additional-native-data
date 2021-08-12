// am_mp_defunct_base.ysc @ L308576
void func_4976(int* iParam0, bool bParam1, int iParam2)
{
  if (iParam2 == 1)
  {
    if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
    {
    }
    ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
    PED::DISABLE_PED_HEATSCALE_OVERRIDE(PLAYER::PLAYER_PED_ID());
    ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
    if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
    {
      ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
    }
    if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
    {
      ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
    }
  }
  iParam0->f_13 = { 0f, 0f, 0f };
  if (bParam1)
  {
    MISC::SET_BIT(iParam0, 9);
  }
  else
  {
    MISC::CLEAR_BIT(iParam0, 9);
  }
  MISC::CLEAR_BIT(iParam0, 3);
}