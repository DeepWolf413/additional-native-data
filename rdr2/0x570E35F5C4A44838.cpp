// odriscolls3.ysc @ L82034
void func_2105(float fParam0)
{
  float fVar0;

  if (fParam0 < 0f)
  {
    fParam0 = 0f;
  }
  if (fParam0 > 1f)
  {
    fParam0 = 1f;
  }
  fVar0 = func_1699(0.1f, 1f, fParam0);
  if (CAM::IS_GAMEPLAY_CAM_SHAKING())
  {
    CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fVar0);
  }
  else
  {
    CAM::SHAKE_GAMEPLAY_CAM(&cLocal_1166, fVar0);
  }
}