// beat_checkpoint.ysc @ L7268
void func_189()
{
  int iVar0;

  if (bLocal_1280)
  {
    if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_810[1], Local_53[11 /*2*/], Local_53[11 /*2*/].f_1, 1))
    {
      func_184(uLocal_810[1], &(iLocal_1337[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
      TASK::OPEN_SEQUENCE_TASK(&iVar0);
      if (func_44(uLocal_810[1], iLocal_807, 0))
      {
        TASK::_TASK_DISEMBARK_VEHICLE(0, iLocal_807, 20000, 0, 1073741824 /* Float: 2f */, 1);
      }
      TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
      TASK::CLOSE_SEQUENCE_TASK(iVar0);
      TASK::TASK_PERFORM_SEQUENCE(uLocal_810[1], iVar0);
      TASK::CLEAR_SEQUENCE_TASK(&iVar0);
      bLocal_1280 = false;
    }
  }
}