// fm_capture_creator.ysc @ L187930
void func_1663()
{
  if (STREAMING::_GET_USED_CREATOR_MODEL_MEMORY_PERCENTAGE() < 1f)
  {
    func_1664(SYSTEM::ROUND((STREAMING::_GET_USED_CREATOR_MODEL_MEMORY_PERCENTAGE() * 1000f)), 1000, "FMMC_M_MEM", 1, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
  }
  else
  {
    func_1664(1, 1, "FMMC_M_MEM", 6, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
  }
}