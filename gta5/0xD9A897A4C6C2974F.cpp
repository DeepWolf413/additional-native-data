// bailbond1.ysc @ L1500
void func_50()
{
  int iVar0;
  int iVar1;
  
  if (func_24(Local_336))
  {
    if (func_427(Local_344))
    {
      if (func_59(3))
      {
        iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(func_54(), func_53(), 2);
        PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
        PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar0, false);
        TASK::TASK_SYNCHRONIZED_SCENE(Local_336, iVar0, func_42(), func_52(), 1000f, -8f, 4688, 0, 1000f, 0);
        iVar1 = 0;
        iVar1 += 16;
        iVar1 += 64;
        iVar1 += 512;
        iVar1 += 4096;
        ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_344, iVar0, func_51(), func_42(), 1000f, -8f, iVar1, 1000f);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_336, true);
        PED::SET_PED_MONEY(Local_336, 0);
        PED::SET_PED_CAN_BE_TARGETTED(Local_336, false);
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_336, 1862763509);
        TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_336, false);
        TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_336, false);
        PED::SET_PED_KEEP_TASK(Local_336, true);
        PED::SET_PED_CONFIG_FLAG(Local_336, 118, false);
      }
    }
  }
}