// act_bankrobbery01.ysc @ L61217
bool func_1975(int iParam0)
{
  int iVar0;

  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return false;
  }
  if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
  {
    return false;
  }
  iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
  if (iVar0 == 0)
  {
    return false;
  }
  if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
  {
    return true;
  }
  if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
  {
    iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
    if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
    {
      return true;
    }
    return false;
  }
  return false;
}