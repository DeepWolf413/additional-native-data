// property_use_core.ysc @ L22341
void func_828(var uParam0, int iParam1, int iParam2)
{
  if (!Global_1914319.f_19461.f_20)
  {
    func_430(iParam2, uParam0);
  }
  if (func_1326(iParam1) == func_1326(Global_1914319.f_19461.f_1))
  {
    return;
  }
  if (func_43(CAM::GET_CAM_COORD(*uParam0)))
  {
    func_1327(&(Global_1914319.f_19461.f_14), &(Global_1914319.f_19461.f_17), &(Global_1914319.f_19461.f_22[0 /*12*/].f_9), &(Global_1914319.f_19461.f_22[0 /*12*/].f_6), &(Global_1914319.f_19461.f_22[0 /*12*/].f_10), &(Global_1914319.f_19461.f_22[0 /*12*/].f_11));
  }
  else
  {
    Global_1914319.f_19461.f_14 = { CAM::GET_CAM_COORD(*uParam0) };
    Global_1914319.f_19461.f_17 = { CAM::GET_CAM_ROT(*uParam0, 2) };
  }
  Global_1914319.f_19461.f_1 = iParam1;
  func_1327(&(Global_1914319.f_19461.f_2), &(Global_1914319.f_19461.f_2.f_3), &(Global_1914319.f_19461.f_2.f_9), &(Global_1914319.f_19461.f_2.f_6), &(Global_1914319.f_19461.f_2.f_10), &(Global_1914319.f_19461.f_2.f_11));
  if (!CAM::DOES_CAM_EXIST(*uParam0))
  {
  }
  Global_1914319.f_19461.f_179 = 0;
  func_1328(1);
  func_856(0);
  CAM::SET_CAM_PARAMS(*uParam0, Global_1914319.f_19461.f_2, Global_1914319.f_19461.f_2.f_3, Global_1914319.f_19461.f_2.f_9, 500, 28, 28, 2, 1, 0);
  CAM::SET_CAM_NEAR_CLIP(*uParam0, 0.25f);
  func_857(*uParam0, func_1326(Global_1914319.f_19461.f_1));
}