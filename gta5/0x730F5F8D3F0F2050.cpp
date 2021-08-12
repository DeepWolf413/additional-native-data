// fm_mission_controller_2020.ysc @ L435232
void func_7220(var uParam0)
{
  if (!MISC::IS_BIT_SET(Global_4718592.f_70989[uParam0->f_9 /*392*/].f_106, 5))
  {
    return;
  }
  if (!MISC::IS_BIT_SET(uLocal_44898.f_2532, uParam0->f_9))
  {
    return;
  }
  if (!MISC::IS_BIT_SET(bLocal_21772, uParam0->f_9))
  {
    ENTITY::SET_ENTITY_RENDER_SCORCHED(uParam0->f_11, true);
    MISC::SET_BIT(&bLocal_21772, uParam0->f_9);
  }
  if (Global_4718592.f_70989[uParam0->f_9 /*392*/].f_296 <= 0)
  {
    return;
  }
  if (uLocal_44898.f_2499[uParam0->f_9] <= 0f && !MISC::IS_BIT_SET(uLocal_44898.f_2533, uParam0->f_9))
  {
    VEHICLE::SET_VEHICLE_BODY_HEALTH(uParam0->f_11, 0f);
    ENTITY::SET_ENTITY_HEALTH(uParam0->f_11, false, 0);
  }
}