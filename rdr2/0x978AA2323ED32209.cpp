// gang3.ysc @ L35287
int func_753(char[4] cParam0)
{
  func_1251(Local_207[1 /*9*/], func_224(func_1250(Local_207[1 /*9*/].f_8), func_132(func_33(cParam0))), 2, 1073741824 /* Float: 2f */);
  VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_917, true);
  ENTITY::_0x978AA2323ED32209(iLocal_917, 0.2f);
  func_1252(0, 0, 1, 1);
  func_1253(0);
  PED::SET_PED_CAN_RAGDOLL(Local_207[0 /*9*/], true);
  func_1254(&(Local_207[0 /*9*/]), 0);
  func_1255(Local_207[0 /*9*/], Global_35);
  func_27(&uLocal_899, 1);
  func_552(&uLocal_902);
  CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
  func_899(0, 0);
  VEHICLE::SET_RANDOM_BOATS(false);
  return 1;
}