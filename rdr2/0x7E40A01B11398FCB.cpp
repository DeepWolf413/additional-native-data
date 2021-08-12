// rcm_mr_mayor2.ysc @ L10165
bool func_353()
{
  if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
  {
    CAM::_0x7E40A01B11398FCB();
  }
  if (!func_79(&uLocal_311))
  {
    if (func_427(iLocal_350, Global_36, 0) < 3f)
    {
      if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_350, false) || AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_350, 1))
      {
        func_263(&uLocal_311);
      }
    }
  }
  else
  {
    CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
    if (func_626(&uLocal_311) > 3.5f)
    {
      func_234(&uLocal_311);
      return true;
    }
    else if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
    {
      CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
    }
  }
  return false;
}