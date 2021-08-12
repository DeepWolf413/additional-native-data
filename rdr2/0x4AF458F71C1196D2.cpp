// odriscolls1.ysc @ L81457
void func_1874(var uParam0)
{
  var uVar0;

  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*uParam0, 0))
  {
    TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 0, joaat("FIRING_PATTERN_FULL_AUTO"), -1082130432 /* Float: -1f */);
    uParam0->f_46 = 1;
    uVar0 = *uParam0;
  }
}