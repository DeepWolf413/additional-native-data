// cornwall1.ysc @ L56721
void func_1336()
{
  if (func_179(uLocal_364, 1) && func_1244(Global_35, 242628503))
  {
    CAM::_0x71D71E08A7ED5BD7(1);
    CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
    if (TASK::GET_SEQUENCE_PROGRESS(Global_35) > 0 && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, "MECH_STRAFE@GENERIC@DIVE@UNARMED", sLocal_1028) >= 0.565f)
    {
      TASK::CLEAR_PED_TASKS(Global_35, true, false);
    }
  }
}