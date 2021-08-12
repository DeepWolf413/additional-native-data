// am_mp_casino.ysc @ L326676
int func_5283(var uParam0, char* sParam1, struct<4> Param2, var uParam6, var uParam7)
{
  if (!MISC::IS_BIT_SET(uParam0->f_530, 4))
  {
    uParam0->f_531 = PED::CREATE_SYNCHRONIZED_SCENE(Param2, Param2.f_3, 2);
    StringCopy(&(uParam0->f_464), "IDLE_TO_GREETING_INTRO_B", 32);
    StringCopy(&(uParam0->f_533), "PA_", 64);
    StringConCat(&(uParam0->f_533), &(uParam0->f_464), 64);
    MemCopy(&(uParam0->f_549), {uParam0->f_464}, 16);
    StringConCat(&(uParam0->f_549), "_CHAIR", 64);
    PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_531, 0f);
    PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_531, true);
    TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_569, uParam0->f_531, sParam1, &(uParam0->f_533), 2f, -2f, 260, 0, 1000f, 0);
    ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_570, uParam0->f_531, &(uParam0->f_549), sParam1, 2f, -2f, 4 | 256, 1000f);
    MISC::SET_BIT(&(uParam0->f_530), 4);
    return 1;
  }
  else
  {
    return 1;
  }
  return 0;
}