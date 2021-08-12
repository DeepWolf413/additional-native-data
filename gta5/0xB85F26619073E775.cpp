// mission_triggerer_a.ysc @ L105221
void func_718()
{
  STREAMING::REQUEST_MODEL(joaat("ig_lestercrest"));
  STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
  STREAMING::REQUEST_MODEL(joaat("p_cctv_s"));
  STREAMING::REQUEST_ANIM_DICT("MissLester1ALeadInOut");
  AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false, -1);
  STREAMING::SET_HD_AREA(1274.42f, -1720.42f, 54.99f, 5f);
  iLocal_1538 = unk_0x67D02A194A2FC2BD("SECURITY_CAM");
}