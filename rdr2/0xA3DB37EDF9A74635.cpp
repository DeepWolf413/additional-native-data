// av_animal_carry_ride.ysc @ L2023
int func_32(var uParam0, var uParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
  {
    PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 3, 2, 0);
    PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 4, 2, 0);
    PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 7, 2, 0);
  }
  func_81(uParam0, 0, 0, 0);
  return 1;
}