# sparkle

SPARKLE_VERSION := 1.5b6
SPARKLE_URL := http://sparkle.andymatuschak.org/files/Sparkle%20$(SPARKLE_VERSION).zip

ifdef HAVE_MACOSX
PKGS += sparkle
endif

$(TARBALLS)/sparkle-$(SPARKLE_VERSION).zip:
	$(call download,$(SPARKLE_URL))

.sum-sparkle: sparkle-$(SPARKLE_VERSION).zip

sparkle: sparkle-$(SPARKLE_VERSION).zip .sum-sparkle
	$(RM) -R $@ && mkdir -p $@ && cd $@ && unzip ../$<
	touch $@

.sparkle: sparkle
	rm -rf "$(PREFIX)/Sparkle.framework"
	#Stupid french files, they have broken sym links
	rm -rf $</Sparkle.framework/Versions/A/Resources/fr_CA.lproj
	rm -rf $</Sparkle.framework/Versions/A/Resources/fr.lproj
	cp -R $</Sparkle.framework "$(PREFIX)"
	touch $@
