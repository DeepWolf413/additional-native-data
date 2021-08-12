// abigail2_1.ysc @ L26842
void func_501(int iParam0, bool bParam1)
{
  if (func_20() != -1)
  {
    return;
  }
  if (iParam0 == 0 && func_82(32768))
  {
    return;
  }
  if (!func_82(32768))
  {
    func_982(1, bParam1);
  }
  MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
  MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
  MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
  MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
  MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
  MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
  MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
  MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
  MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
  MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
  if (func_82(32768))
  {
    Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_277();
  }
}