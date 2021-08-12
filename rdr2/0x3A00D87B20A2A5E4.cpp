// loanshark_hunter.ysc @ L2636
bool func_89(int iParam0, vector3 vParam1, float fParam4)
{
  if (!func_81(uLocal_147[iParam0], 0))
  {
    if (func_251(1, &(uLocal_147[iParam0]), joaat("A_C_COUGAR_01"), vParam1, fParam4, 1, 1, 0, 1, 1, 1, 1))
    {
      TASK::TASK_STAND_STILL(uLocal_147[iParam0], -1);
      PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], false);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_147[iParam0], true);
      AUDIO::_0x3A00D87B20A2A5E4(uLocal_147[iParam0], 1);
      func_90(uLocal_147[iParam0], 1);
      PED::SET_PED_CONFIG_FLAG(uLocal_147[iParam0], 6, true);
      if (iParam0 == 0)
      {
        PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_147[0]);
        func_260(uLocal_147[0]);
        PED::SET_PED_CONFIG_FLAG(uLocal_147[0], 542, true);
        PED::_SET_PED_BODY_COMPONENT(uLocal_147[0], 263759244);
        PED::_UPDATE_PED_VARIATION(uLocal_147[0], true, true, true, true, false);
        FLOCK::_0x8B6F0F59B1B99801(uLocal_147[0], 1);
        ENTITY::_0x18FF3110CF47115D(uLocal_147[0], 7, 0);
        func_261(uLocal_147[0], "BLIP_COUGAR", 1);
      }
      func_262(uLocal_147[iParam0], vParam1);
      return true;
    }
  }
  else
  {
    return true;
  }
  return false;
}