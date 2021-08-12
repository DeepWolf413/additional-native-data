// beat_dead_john.ysc @ L10084
void func_220()
{
  if (func_43(uLocal_1250[1], 0, 1))
  {
    TASK::CLEAR_SEQUENCE_TASK(&iLocal_1290);
    TASK::TASK_PLAY_ANIM(uLocal_1250[1], Local_547[37 /*2*/], Local_547[37 /*2*/].f_1, 8f, -4f, -1, 1, 0f, false, 0, false, 0, false);
    PED::APPLY_PED_DAMAGE_PACK(uLocal_1250[1], "PD_Dead_John_bloody_hands", 0f, 1f);
    if (!ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, -315.6169f, 794.0749f, 116.7205f, 17))
    {
      MISC::CLEAR_AREA(-315.6169f, 794.0749f, 116.7205f, 2f, 8);
    }
  }
}