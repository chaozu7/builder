//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#endif


class TDocument : public TTabSheet
{
	public:
		TDocument(TPageControl *APageControl);
        __fastcall TDocument();
		__fastcall ~TDocument();
		void LoadFromFile(String AFileName);
        void activeDocument();
		TRichEdit *RichEdit;
		String FileName;
};

