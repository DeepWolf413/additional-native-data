// abigail2_1.ysc @ L79159
void func_2316(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < cParam3->f_97)
  {
    if (ENTITY::DOES_ENTITY_EXIST((*cParam3)[iVar0 /*4*/]))
    {
      if (!ENTITY::IS_ENTITY_DEAD((*cParam3)[iVar0 /*4*/]))
      {
        AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*cParam3)[iVar0 /*4*/], &((cParam3[iVar0 /*4*/])->f_1));
      }
    }
    iVar0++;
  }
}