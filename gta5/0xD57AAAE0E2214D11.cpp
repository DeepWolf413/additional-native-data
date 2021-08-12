// am_mp_property_int.ysc @ L191335
void func_1936(var uParam0)
{
  struct<3> Var0;
  
  AUDIO::FREEZE_MICROPHONE();
  if (func_4006(&(uParam0->f_63), 200, 0))
  {
    func_8047(&(uParam0->f_63), 0, 0);
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_21[0], false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_19, false))
    {
      Var0 = { uParam0->f_12 + uParam0->f_66 * Vector(3f, 3f, 3f) + Vector(12f, 0f, 0f) };
      TASK::TASK_HELI_MISSION(uParam0->f_21[0], uParam0->f_19, 0, 0, Var0, 4, 70f, 0.5f, uParam0->f_5, 0, 0, -1f, 8256);
    }
    ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_19, false);
    ENTITY::SET_ENTITY_COLLISION(uParam0->f_19, true, false);
    func_1950(uParam0, PLAYER::PLAYER_PED_ID());
    func_1950(uParam0, uParam0->f_21[0]);
    if (func_8056())
    {
      func_1945(1, 0);
      MISC::SET_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_511), 8);
      Global_2463533.f_326 = 0;
    }
    CAM::DO_SCREEN_FADE_IN(500);
    func_1937(uParam0);
    STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.6f);
    func_1905(uParam0, 12);
  }
}