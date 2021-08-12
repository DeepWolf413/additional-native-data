// startup.ysc @ L2687
void func_96(var uParam0)
{
  int iVar0;
  char cVar1[64];

  SAVE::_0x443174C20B8B9E7F(uParam0, 22, "loansharkingData");
  SAVE::_0x529B9CCD0972AF4D(uParam0, "loansharkingData.iLSActiveDebtors");
  SAVE::_0x81F4E92BE3958364(&(uParam0->f_1), 10, "loansharkingData.todLSVictimRespawn");
  iVar0 = 0;
  while (iVar0 < uParam0->f_1)
  {
    StringCopy(&cVar1, "loansharkingData.todLSVictimRespawn", 64);
    StringIntConCat(&cVar1, iVar0, 64);
    SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1[iVar0]), &cVar1);
    iVar0++;
  }
  SAVE::_0xA844FEB5C22C2C74();
  SAVE::_0x81F4E92BE3958364(&(uParam0->f_11), 10, "loansharkingData.eLSSavedMissionFlags");
  iVar0 = 0;
  while (iVar0 < uParam0->f_11)
  {
    StringCopy(&cVar1, "loansharkingData.eLSSavedMissionFlags", 64);
    StringIntConCat(&cVar1, iVar0, 64);
    SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_11[iVar0]), &cVar1);
    iVar0++;
  }
  SAVE::_0xA844FEB5C22C2C74();
  SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_21), "loansharkingData.eLSSavedSystemFlags");
  SAVE::_0xE0B45E983BFC0768();
}