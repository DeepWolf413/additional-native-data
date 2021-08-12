// agency_heist3a.ysc @ L131761
void func_990()
{
  if (CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::HAS_CUTSCENE_LOADED())
  {
    if (!iLocal_4693)
    {
      STREAMING::_0xF8155A7F03DDFC8E(1);
      STREAMING::_0xBEB2D9A1D9A8F55A(4, 4, 4, 4);
      iLocal_4693 = 1;
    }
  }
  else if (iLocal_4693)
  {
    iLocal_4693 = 0;
  }
}