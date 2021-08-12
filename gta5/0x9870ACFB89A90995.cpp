// clothes_shop_mp.ysc @ L277670
void func_1277(var uParam0)
{
  if ((!func_1057(1) || !uParam0->f_9) || func_1268(*uParam0))
  {
    return;
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
  {
    if (!PED::IS_PED_INJURED(uParam0->f_12))
    {
      if (func_750(0))
      {
        if (((MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, false), 5f, true, false) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, false) - Vector(5f, 7.5f, 7.5f), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, false) + Vector(5f, 7.5f, 7.5f), true)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_12)) || func_1279(uParam0))
        {
          PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, false);
          TASK::TASK_COWER(uParam0->f_12, -1);
          if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
          {
            PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_12, 32768, true);
          }
          PED::SET_PED_KEEP_TASK(uParam0->f_12, true);
          ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
          func_1278(*uParam0, 1);
        }
      }
    }
    else
    {
      func_1141("Mask shop keeper is dead!", -1);
      func_1278(*uParam0, 1);
    }
  }
}