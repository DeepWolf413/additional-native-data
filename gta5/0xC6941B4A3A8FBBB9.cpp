// fm_mission_controller.ysc @ L801704
void func_13516(bool bParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = NETWORK::NET_TO_PED(Local_22619.f_834[bParam0]);
  if (!MISC::IS_BIT_SET(uLocal_17173[func_768(bParam0)], func_767(bParam0)))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
    {
      if (iParam1 == 12)
      {
        AUDIO::PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE(iVar0, "GENERIC_CURSE_MED", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
      }
      else if (iParam1 == 11 || iParam1 == 8)
      {
        AUDIO::PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE(iVar0, "GENERIC_FRIGHTENED_MED", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
      }
      else
      {
        iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(false, 9);
        if (iVar1 < 6)
        {
          AUDIO::PLAY_PAIN(iVar0, 6, 0, 0);
        }
        else
        {
          AUDIO::PLAY_PAIN(iVar0, 3, 0, 0);
        }
      }
    }
  }
}