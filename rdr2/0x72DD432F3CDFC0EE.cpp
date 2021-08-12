// beat_animal_mauling.ysc @ L3335
void func_90(int iParam0, vector3 vParam1, bool bParam4)
{
  if (bParam4)
  {
    MAP::ALLOW_SONAR_BLIPS(true);
    MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
  }
  MAP::TRIGGER_SONAR_BLIP(iParam0, vParam1);
}