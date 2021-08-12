// am_contact_requests.ysc @ L73869
void func_1181(float* fParam0, float* fParam1, var uParam2, var uParam3, int iParam4)
{
  GRAPHICS::SET_SCRIPT_GFX_ALIGN(iParam4, 84);
  if (iParam4 == 82)
  {
    *fParam0 = 0.14f;
    *fParam1 = 0.3f;
    *uParam2 = 0.28f;
    *uParam3 = 0.6f;
  }
  else if (iParam4 == 76)
  {
    *fParam0 = 0.14f;
    *fParam1 = 0.3f;
    *uParam2 = 0.28f;
    *uParam3 = 0.6f;
  }
  GRAPHICS::_GET_SCRIPT_GFX_POSITION(*fParam0, *fParam1, fParam0, fParam1);
  GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}