// ambush_inb_bridge_ambush.ysc @ L3319
void func_131(var uParam0, int iParam1, bool bParam2, float fParam3, float fParam4, float fParam5)
{
  float fVar0;

  if (bParam2)
  {
    fVar0 = 5f;
    if (fParam3 <= 0f)
    {
      fVar0 = 0f;
    }
    func_276(iParam1, fParam3, fVar0, fParam4, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
    PED::SET_PED_HEARING_RANGE(iParam1, fParam5);
  }
  else
  {
    func_276(iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
    PED::SET_PED_HEARING_RANGE(iParam1, 60f);
  }
}