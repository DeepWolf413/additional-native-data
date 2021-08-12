// short_update.ysc @ L474
void func_14()
{
  if (func_82() == -1)
  {
    func_92();
    func_93();
    func_94();
    func_95();
    func_96(8388608);
    if (MAP::DOES_BLIP_EXIST(MAP::GET_MAIN_PLAYER_BLIP_ID()))
    {
      MAP::SET_BLIP_NAME_FROM_TEXT_FILE(MAP::GET_MAIN_PLAYER_BLIP_ID(), "BLIP_PLAYER");
    }
    func_97();
    func_98();
    func_99();
    func_100();
  }
}