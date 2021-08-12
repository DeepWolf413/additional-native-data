// fillet_sp.ysc @ L13184
void func_519(var uParam0)
{
  float fVar0;

  if (((uParam0->f_28 == 3 && !func_520(uParam0, 2)) && CAM::DOES_CAM_EXIST(uParam0->f_30)) && CAM::IS_CAM_ACTIVE(uParam0->f_30))
  {
    uParam0->f_38 = (uParam0->f_38 + (MISC::GET_FRAME_TIME() / 1.5f));
    uParam0->f_38 = func_681(uParam0->f_38, 0f, 1f);
    fVar0 = MISC::_0xEF50E344A8F93784(uParam0->f_38, (uParam0->f_37 + 2.5f), uParam0->f_37, 2);
    CAM::SET_CAM_FOV(uParam0->f_30, fVar0);
    func_502(uParam0, 2, 0);
  }
}