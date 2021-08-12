// bounty1.ysc @ L49571
void func_1249()
{
  switch (iLocal_307)
  {
    case 0:
      func_1203();
      if ((!CAM::IS_GAMEPLAY_HINT_ACTIVE() && func_1255(Global_35, sLocal_33, 33)) && !CAM::_0x5060FA977CEA4455())
      {
        func_689("BOU1_FOCUS", 10000, 0, 0, 0, 1);
        iLocal_307 = 1;
      }
      break;
    case 1:
      if (CAM::IS_CINEMATIC_CAM_RENDERING())
      {
        iLocal_307 = 2;
      }
      break;
    case 2:
      func_27(&uLocal_304, 0);
      if (func_1285(&uLocal_304) > 1f && !CAM::_0x5060FA977CEA4455())
      {
        func_525(&uLocal_304);
        func_113(1);
        func_689("BOU1_FOCUS_OUT", 10000, 0, 0, 0, 1);
        iLocal_307 = 3;
      }
      break;
  }
}