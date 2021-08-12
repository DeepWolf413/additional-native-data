// cablecar.ysc @ L33342
void func_258(struct<3> Param0, struct<3> Param3, float fParam6)
{
  if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
  {
    return;
  }
  if (iLocal_441 == 1)
  {
    return;
  }
  if (iLocal_53)
  {
    if (STREAMING::STREAMVOL_IS_VALID(iLocal_52))
    {
      STREAMING::STREAMVOL_DELETE(iLocal_52);
    }
    iLocal_52 = STREAMING::STREAMVOL_CREATE_FRUSTUM(Param0, func_257(Param3), fParam6, 12, 127);
    iLocal_53 = 0;
  }
  else if (STREAMING::STREAMVOL_IS_VALID(iLocal_52))
  {
    if (STREAMING::IS_STREAMVOL_ACTIVE())
    {
      if (STREAMING::STREAMVOL_HAS_LOADED(iLocal_52))
      {
        STREAMING::STREAMVOL_DELETE(iLocal_52);
      }
    }
  }
}