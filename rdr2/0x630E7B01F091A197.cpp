// beat_street_fight.ysc @ L16342
void func_485(int iParam0, int iParam1)
{
  if (!func_90(uLocal_178[iParam0], 0, 1))
  {
    return;
  }
  if (!func_90(uLocal_178[iParam1], 0, 1))
  {
    return;
  }
  PED::SET_PED_CONFIG_FLAG(uLocal_178[iParam1], 174, true);
  PED::SET_PED_CONFIG_FLAG(uLocal_178[iParam1], 213, true);
  PED::_0x789DABD18E9024DB(uLocal_178[iParam0], 29, 0);
  func_734();
  PED::SET_PED_USING_ACTION_MODE(uLocal_178[iParam0], true, 8000, 0);
  PED::_0x630E7B01F091A197(uLocal_178[iParam0], joaat("GS_FACE_TO_FACE"));
  PED::_0x630E7B01F091A197(uLocal_178[iParam1], joaat("GS_FACE_TO_FACE"));
  TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(uLocal_178[iParam0], uLocal_178[iParam1], 0, 0, 0.2f, 0, 0);
  PED::FORCE_PED_MOTION_STATE(uLocal_178[iParam0], 1926482157, false, 0, false);
  PED::FORCE_PED_MOTION_STATE(uLocal_178[iParam1], 1926482157, false, 0, false);
  iLocal_183 = iParam0;
  iLocal_184 = iParam1;
  func_161(&uLocal_150);
  func_161(&uLocal_147);
}