// beat_rally_dispute.ysc @ L3258
void func_95(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
  int iVar0;

  if (!func_74(*iParam1, iParam2))
  {
    if (func_114(iParam0, 0, 1))
    {
      if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("ENDSINWALK")))
      {
        ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_373, sParam3, iParam0);
        PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_WALK"), false, 0, false);
        TASK::OPEN_SEQUENCE_TASK(&iVar0);
        TASK::TASK_SMART_FLEE_COORD(0, Local_32.f_51, 100f, -1, 8448, 1f);
        func_244(iParam0, &iVar0, 0, 0, 1, 1);
        PED::_0x2208438012482A1A(iParam0, false, false);
        func_76(iParam1, iParam2);
      }
      else if (func_74(iLocal_448, 16384) && !func_74(iLocal_448, iParam4))
      {
        TASK::_0x673A8779D229BA5A(iParam0, Local_32.f_51, 0, 0);
        func_76(iParam1, iParam4);
      }
    }
  }
}