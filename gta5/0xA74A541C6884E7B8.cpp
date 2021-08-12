// agency_heist3a.ysc @ L132972
void func_1017()
{
  STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
  fLocal_7280 = (fLocal_7280 + (MISC::GET_FRAME_TIME() * 1000f));
  if (fLocal_7280 < 0f)
  {
    fLocal_7280 = 0f;
  }
  STREAMING::SET_SRL_TIME(fLocal_7280);
}