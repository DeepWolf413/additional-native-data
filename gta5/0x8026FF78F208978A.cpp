// fm_bj_race_controler.ysc @ L315958
void func_4310(var uParam0, int iParam1, var uParam2)
{
  if ((!func_4169(uParam0->f_571) || func_380(uParam0)) || func_379(uParam0))
  {
    return;
  }
  if (iParam1 == 1)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5318))
    {
      if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_5318, false))
      {
        PLAYER::SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(PLAYER::PLAYER_ID(), uParam2->f_5318);
      }
    }
  }
  else
  {
    PLAYER::SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(PLAYER::PLAYER_ID(), 0);
  }
}